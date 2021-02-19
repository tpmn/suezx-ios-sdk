#import <UIKit/UIKit.h>
#import "SuezxBannerAdViewDelegate.h"

@interface SuezxBannerAdView : UIView <UIWebViewDelegate>

@property(nonatomic, copy) IBInspectable NSString *PublisherId;
@property(nonatomic, copy) IBInspectable NSString *InventoryId;
@property(nonatomic, copy) IBInspectable NSString *AdStyle;
@property(nonatomic, copy) IBInspectable NSString *UserId;
@property(nonatomic, assign) int RefreshInterval;
@property(nonatomic, weak) IBOutlet UIViewController *rootViewController;
@property(nonatomic, weak) IBOutlet id<SuezxBannerAdViewDelegate> delegate;
- (void)loadRequest;
@end
