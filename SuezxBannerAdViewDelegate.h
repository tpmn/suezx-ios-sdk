#import <Foundation/Foundation.h>

@class SuezxBannerAdView;

@protocol SuezxBannerAdViewDelegate<NSObject>

@optional

- (void)onBannerAdClicked:(SuezxBannerAdView *)bannerView;
- (void)onBannerAdFailed:(SuezxBannerAdView *)bannerView AdError:(NSInteger)errorCode AdErrorMsg:(NSString *)errorMsg;
- (void)onBannerAdLoaded:(SuezxBannerAdView *)bannerView;

@end
