/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicItem : HLPHelpItem {
    NSArray *_categories;
    NSString *_hrefID;
}

@property (nonatomic, copy) NSArray *categories;
@property (getter=isCopyright, nonatomic, readonly) BOOL copyright;
@property (getter=isGlossary, nonatomic, readonly) BOOL glossary;
@property (nonatomic, copy) NSString *hrefID;

- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)hrefID;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2;
- (BOOL)isCopyright;
- (BOOL)isGlossary;
- (void)setCategories:(id)arg1;
- (void)setHrefID:(id)arg1;

@end
