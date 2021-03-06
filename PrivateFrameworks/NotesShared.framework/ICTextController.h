/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTextController : TTTextController {
    BOOL _disableAddingExtraLinesIfNeeded;
    ICLayoutManager *_layoutManager;
    ICNote *_note;
    BOOL _trackAddedExtraNewlineRanges;
    NSMutableArray *_trackedRangesForAddedExtraNewlines;
    NSMutableDictionary *_trackedToDoParagraphs;
    BOOL _userChangedWritingDirection;
}

@property (nonatomic) BOOL disableAddingExtraLinesIfNeeded;
@property (nonatomic) ICLayoutManager *layoutManager;
@property (nonatomic) ICNote *note;
@property (nonatomic) BOOL trackAddedExtraNewlineRanges;
@property (nonatomic, retain) NSMutableArray *trackedRangesForAddedExtraNewlines;
@property (nonatomic, readonly) NSMutableDictionary *trackedToDoParagraphs;
@property BOOL userChangedWritingDirection;

+ (float)indentForStyle:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 attributedString:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;

- (void).cxx_destruct;
- (void)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (BOOL)canIndentTextView:(struct UITextView { Class x1; }*)arg1 byDelta:(int)arg2;
- (void)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4;
- (void)createToDoItemForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (BOOL)deleteBackwardInTextView:(struct UITextView { Class x1; }*)arg1;
- (BOOL)deleteWordBackwardInTextView:(struct UITextView { Class x1; }*)arg1;
- (BOOL)disableAddingExtraLinesIfNeeded;
- (struct _NSRange { unsigned int x1; unsigned int x2; })firstParagraphForSetListStyleRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextStorage:(id)arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4;
- (id)indentParagraphStyle:(id)arg1 byAmount:(int)arg2;
- (void)indentRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 byAmount:(int)arg2 inTextStorage:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;
- (id)init;
- (BOOL)insertNewlineInTextView:(struct UITextView { Class x1; }*)arg1;
- (BOOL)insertedSpaceInTextView:(struct UITextView { Class x1; }*)arg1 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextView:(struct UITextView { Class x1; }*)arg3;
- (BOOL)isTodoDoneRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextStorage:(id)arg2;
- (id)keyboardLanguageForTextView:(struct UITextView { Class x1; }*)arg1;
- (id)layoutManager;
- (id)note;
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 attributedString:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)paragraphStyleForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextView:(struct UITextView { Class x1; }*)arg2 inTextStorage:(id)arg3;
- (void)removeFontsAndColorsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextStorage:(id)arg2;
- (BOOL)removeListStyleForDeletionIfNecessaryForTextView:(struct UITextView { Class x1; }*)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 andLocation:(unsigned int)arg4;
- (void)resetTrackedToDoParagraphs;
- (struct UIFont { Class x1; }*)scaleFont:(struct UIFont { Class x1; }*)arg1 withScale:(float)arg2;
- (void)scaleFontPointSize:(float)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextStorage:(id)arg3;
- (void)setDisableAddingExtraLinesIfNeeded:(BOOL)arg1;
- (void)setDone:(BOOL)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextStorage:(id)arg3;
- (void)setLayoutManager:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg2 withLayoutManager:(id)arg3;
- (int)setTextStyle:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextStorage:(id)arg3;
- (int)setTextStyle:(unsigned int)arg1 removeExtraStyling:(BOOL)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 inTextStorage:(id)arg4;
- (void)setTrackAddedExtraNewlineRanges:(BOOL)arg1;
- (void)setTrackedRangesForAddedExtraNewlines:(id)arg1;
- (void)setTypingAttributesForUndo:(id)arg1;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(struct UITextView { Class x1; }*)arg2;
- (void)setUserChangedWritingDirection:(BOOL)arg1;
- (void)setWritingDirectionForNewText:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toDirection:(int)arg3 inTextView:(struct UITextView { Class x1; }*)arg4;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)superscriptDelta:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(id /* block */)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextStorage:(id)arg3;
- (id)todoForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextStorage:(id)arg2;
- (BOOL)trackAddedExtraNewlineRanges;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)trackedRangesForAddedExtraNewlines;
- (id)trackedToDoParagraphs;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)unscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextStorage:(id)arg2;
- (void)updateAttachmentsInNote;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned int)arg1 byDelta:(int)arg2 excludingSeenParagraphs:(id)arg3;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (BOOL)userChangedWritingDirection;
- (int)writingDirectionForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextView:(struct UITextView { Class x1; }*)arg2 inTextStorage:(id)arg3;

@end
