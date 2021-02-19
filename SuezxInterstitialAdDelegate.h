#import <Foundation/Foundation.h>

@class SuezxInterstitialAd;

@protocol SuezxInterstitialAdDelegate<NSObject>

@optional

- (void)onInterstitialAdClicked:(SuezxInterstitialAd *)InterstitialAd;
- (void)onInterstitialAdFailed:(SuezxInterstitialAd *)InterstitialAd AdError:(NSInteger)errorCode AdErrorMsg:(NSString *)errorMsg;
- (void)onInterstitialAdLoaded:(SuezxInterstitialAd *)InterstitialAd;
- (void)onInterstitialAdClosed:(SuezxInterstitialAd *)InterstitialAd;

@end
