/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool_invalidateForVerticalScroll;
    bool_invalidationHasBeenRedispatched;
    bool_samplingIsPreserved;
    bool_sectioningIsPreserved;
}

@property bool invalidateForVerticalScroll;
@property bool invalidationHasBeenRedispatched;
@property bool samplingIsPreserved;
@property bool sectioningIsPreserved;

- (id)description;
- (bool)invalidateForVerticalScroll;
- (bool)invalidationHasBeenRedispatched;
- (bool)samplingIsPreserved;
- (bool)sectioningIsPreserved;
- (void)setInvalidateForVerticalScroll:(bool)arg1;
- (void)setInvalidationHasBeenRedispatched:(bool)arg1;
- (void)setSamplingIsPreserved:(bool)arg1;
- (void)setSectioningIsPreserved:(bool)arg1;

@end