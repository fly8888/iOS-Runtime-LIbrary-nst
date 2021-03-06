/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate, UIViewControllerPreviewingDelegate> {
    BOOL _adjustingForDeceleration;
    BOOL _allowsDaySwitching;
    BOOL _allowsSelection;
    BOOL _alwaysAnimate;
    BOOL _animateAllDayAreaHeight;
    NSCalendar *_calendar;
    UIView *_clipView;
    BOOL _correctAfterScroll;
    EKDayView *_currentDay;
    EKDayViewWithGutters *_currentDayWithGutter;
    EKEventEditViewController *_currentEditor;
    <EKDayViewControllerDataSource> *_dataSource;
    double _dayEnd;
    double _dayStart;
    unsigned int _decelerating;
    ScrollSpringFactory *_decelerationSpringFactory;
    <EKDayViewControllerDelegate> *_delegate;
    BOOL _disableGestureDayChange;
    BOOL _disableNotifyDateChangeDuringTracking;
    NSDateComponents *_displayDate;
    EKEventGestureController *_eventGestureController;
    BOOL _fingerDown;
    UIView *_gestureOccurrenceSuperview;
    float _gutterWidth;
    unsigned int _hasPendingNextDate;
    unsigned int _hasPendingPreviousDate;
    UIScrollView *_horizontalScrollingView;
    BOOL _initialLoadHasOccurred;
    BOOL _instigatedDateChange;
    BOOL _needToCompleteDeceleration;
    BOOL _needToCompleteScrollingAnimation;
    EKDayView *_nextDay;
    CalendarOccurrencesCollection *_nextDayOccurrences;
    EKDayViewWithGutters *_nextDayWithGutter;
    struct CGPoint { 
        float x; 
        float y; 
    } _normalizedContentOffset;
    BOOL _notifyWhenTapOtherEventDuringDragging;
    CalendarOccurrencesCollection *_occurrences;
    NSDateComponents *_originalDisplayDate;
    int _parallaxState;
    NSDateComponents *_pendingNextDate;
    NSDateComponents *_pendingPreviousDate;
    EKDayView *_previousDay;
    CalendarOccurrencesCollection *_previousDayOccurrences;
    EKDayViewWithGutters *_previousDayWithGutter;
    BOOL _resizing;
    unsigned int _scrollViewAnimating;
    unsigned int _settingDateFromScrolling;
    BOOL _shouldAutoscrollAfterAppearance;
    NSTimer *_showNowTimer;
    BOOL _showsBanner;
    NSDateComponents *_targetDateComponents;
    BOOL _transitionedToSameDay;
    BOOL _viewAppeared;
    <UIViewControllerPreviewing> *_viewControllerPreviewingRegistration;
}

@property (nonatomic) BOOL allowsDaySwitching;
@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL alwaysAnimate;
@property (nonatomic) BOOL animateAllDayAreaHeight;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) UIView *currentAllDayView;
@property (nonatomic, readonly) BOOL currentDayContainsOccurrences;
@property (nonatomic, readonly) UIView *currentDayContentGridView;
@property (nonatomic, retain) EKEventEditViewController *currentEditor;
@property (nonatomic) <EKDayViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKDayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableGestureDayChange;
@property (nonatomic) BOOL disableNotifyDateChangeDuringTracking;
@property (nonatomic, copy) NSDateComponents *displayDate;
@property (nonatomic, retain) UIView *gestureOccurrenceSuperview;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { float x1; float x2; } normalizedContentOffset;
@property (nonatomic) BOOL notifyWhenTapOtherEventDuringDragging;
@property (nonatomic, copy) NSDateComponents *pendingNextDate;
@property (nonatomic, copy) NSDateComponents *pendingPreviousDate;
@property (nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;
@property (nonatomic) BOOL shouldAutoscrollAfterAppearance;
@property (nonatomic, retain) NSTimer *showNowTimer;
@property (nonatomic) BOOL showsBanner;
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitionedToSameDay;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_beginParallaxStateIfPossible;
- (BOOL)_canScrollToNow;
- (BOOL)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (void)_cleanUpTargetDateComponents;
- (void)_completeDecelerationIfNeeded;
- (void)_completeScrollingAnimationIfNeeded;
- (id)_createGutterDayViewWithDayView:(id)arg1;
- (void)_didRespondToApplicationDidBecomeActiveStateChange;
- (void)_endParallaxStateIfNeeded;
- (id)_eventGestureSuperview;
- (id)_eventsForDay:(id)arg1;
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2;
- (BOOL)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2;
- (BOOL)_isCurrentDayToday;
- (BOOL)_isResizing;
- (BOOL)_isViewInVisibleRect:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_notifyDelegateOfSelectedDateChange;
- (id)_occurrencesForDayView:(id)arg1;
- (void)_relayoutDays;
- (void)_relayoutDaysDuringScrolling;
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg1;
- (void)_scrollDayViewAfterRelayoutDays;
- (void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1 notifyParallxState:(BOOL)arg2;
- (void)_setDayView:(id)arg1 toDate:(id)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setDisplayDateInternal:(id)arg1;
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;
- (BOOL)_shouldRespondToApplicationDidBecomeActiveStateChange;
- (BOOL)_shouldScrollToNow;
- (void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (double)_showNowDelay;
- (void)_showNowTimerFired:(id)arg1;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)_stopShowNowTimer;
- (void)_updateAllDayAreaHeight;
- (float)_weightedAllDayHeightForView:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)allowsDaySwitching;
- (BOOL)allowsSelection;
- (BOOL)alwaysAnimate;
- (BOOL)animateAllDayAreaHeight;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)beginExternallyControlledScrolling;
- (BOOL)blockableScrollViewShouldAllowScrolling;
- (void)bringEventToFront:(id)arg1;
- (id)calendar;
- (id)createEventForEventGestureController:(id)arg1;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (id)currentAllDayView;
- (BOOL)currentDayContainsOccurrences;
- (id)currentDayContentGridView;
- (id)currentEditor;
- (id)dataSource;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didScaleDayViewWithScale:(float)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayView:(id)arg1 didUpdateScrollPosition:(struct CGPoint { float x1; float x2; })arg2;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned int)arg2;
- (void)dayView:(id)arg1 isPinchingDayViewWithScale:(float)arg2;
- (void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)dayViewDidTapEmptySpace:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(struct CGPoint { float x1; float x2; })arg5;
- (BOOL)disableGestureDayChange;
- (BOOL)disableNotifyDateChangeDuringTracking;
- (id)displayDate;
- (void)editorDidCancelEditingEvent:(id)arg1;
- (void)editorDidDeleteEvent:(id)arg1;
- (void)editorDidSaveEvent:(id)arg1;
- (void)endExternallyControlledScrolling;
- (BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3;
- (BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3;
- (BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint { float x1; float x2; })arg2 requireInsistence:(BOOL)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
- (struct CGPoint { float x1; float x2; })eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3;
- (float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned int)arg2;
- (float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)externallyEndedGestureDragging;
- (unsigned int)firstVisibleSecond;
- (id)gestureController;
- (id)gestureOccurrenceSuperview;
- (float)gutterWidth;
- (float)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)layoutContainerView:(id)arg1;
- (void)loadView;
- (struct CGPoint { float x1; float x2; })normalizedContentOffset;
- (BOOL)notifyWhenTapOtherEventDuringDragging;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(BOOL)arg2;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)pendingNextDate;
- (id)pendingPreviousDate;
- (id)preferredEventToSelectOnDate:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)reloadData;
- (void)reloadDataBetweenStart:(id)arg1 end:(id)arg2;
- (void)scrollDayViewAppropriatelyWithAnimation:(BOOL)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)scrollEventsInToViewIgnoresVisibility;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (void)scrollToNow:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAllowsDaySwitching:(BOOL)arg1;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)setAlwaysAnimate:(BOOL)arg1;
- (void)setAnimateAllDayAreaHeight:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCurrentEditor:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableGestureDayChange:(BOOL)arg1;
- (void)setDisableNotifyDateChangeDuringTracking:(BOOL)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 gutterWidth:(float)arg2;
- (void)setGestureOccurrenceSuperview:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setNormalizedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setNotifyWhenTapOtherEventDuringDragging:(BOOL)arg1;
- (void)setPendingNextDate:(id)arg1;
- (void)setPendingPreviousDate:(id)arg1;
- (void)setScrollEventsInToViewIgnoresVisibility:(BOOL)arg1;
- (void)setShouldAutoscrollAfterAppearance:(BOOL)arg1;
- (void)setShowNowTimer:(id)arg1;
- (void)setShowsBanner:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setToDay:(id)arg1 normalizedOffset:(float)arg2;
- (void)setTransitionedToSameDay:(BOOL)arg1;
- (BOOL)shouldAutoscrollAfterAppearance;
- (id)showNowTimer;
- (BOOL)showsBanner;
- (void)significantTimeChangeOccurred;
- (float)timedRegionOriginForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;
- (BOOL)transitionedToSameDay;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
