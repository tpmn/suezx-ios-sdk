#import <UIKit/UIKit.h>
#import "SuezxInterstitialAdDelegate.h"

@interface SuezxInterstitialAd : NSObject <UIWebViewDelegate>
@property(nonatomic, copy) IBInspectable NSString *PublisherId;
@property(nonatomic, copy) IBInspectable NSString *InventoryId;
@property(nonatomic, copy) IBInspectable NSString *UserId;
@property(nonatomic, copy) IBInspectable NSString *AdSize;
@property(nonatomic, assign) BOOL interstitialReady;
@property(nonatomic, weak) IBOutlet UIViewController *rootViewController;
@property(nonatomic, weak) IBOutlet id<SuezxInterstitialAdDelegate> delegate;
- (void)loadRequest;
- (BOOL)showInterstitialAd:(UIViewController *)adsViewController;
@end
