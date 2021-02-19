#import <Foundation/Foundation.h>

@class SuezxAdView;

@protocol SuezxAdViewDelegate<NSObject>

@optional

- (void)onAdClicked:(SuezxAdView *)adView;
- (void)onAdFailed:(SuezxAdView *)adView AdError:(NSInteger)errorCode AdErrorMsg:(NSString *)errorMsg;
- (void)onAdLoaded:(SuezxAdView *)adView;

@end
