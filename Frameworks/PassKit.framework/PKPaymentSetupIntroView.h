/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupIntroView : UIView {
    int _context;
    UIImageView *_heroImage;
    PKPaymentSetupHeroView *_heroView;
    PKPaymentSetupInfoView *_infoView;
}

@property (nonatomic, retain) UIImageView *heroImage;
@property (nonatomic, retain) PKPaymentSetupInfoView *infoView;

- (void)_createSubviews;
- (void)dealloc;
- (id)heroImage;
- (id)infoView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(int)arg2;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (void)setHeroImage:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end