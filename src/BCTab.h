
@interface BCTab : UIButton {
    UIColor *topColor;
    UIColor *bottomColor;
}
@property (nonatomic, retain) UIColor *topColor;
@property (nonatomic, retain) UIColor *bottomColor;

- (id)initWithIconImageName:(NSString *)_imageName selectedImageNameSuffix:(NSString *)_selectedSuffix landscapeImageNameSuffix:(NSString *)_landscapeSuffix;
- (void)adjustImageForOrientation;

@end
