//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXForYouSettings
{
    _Bool _showMemories;	// 8 = 0x8
    _Bool _showSharedAlbumActivity;	// 9 = 0x9
    _Bool _showCMMSuggestions;	// 10 = 0xa
    _Bool _showCMMInvitations;	// 11 = 0xb
    _Bool _showRecentInterestSuggestions;	// 12 = 0xc
    _Bool _showPeopleQuestions;	// 13 = 0xd
    _Bool _showSurveyQuestions;	// 14 = 0xe
    _Bool _showSurveyQuestionsWithProfile;	// 15 = 0xf
    _Bool _showHubbleSurveyQuestions;	// 16 = 0x10
    _Bool _showFooter;	// 17 = 0x11
    _Bool _showSampleSuggestionGadgets;	// 18 = 0x12
    _Bool _showVerticalSampleGadgets;	// 19 = 0x13
    _Bool _showHorizontalGadget;	// 20 = 0x14
    _Bool _showContentSyndication;	// 21 = 0x15
    _Bool _allowVideoPlayback;	// 22 = 0x16
    _Bool _allowLoopPlayback;	// 23 = 0x17
    _Bool _allowGIFPlayback;	// 24 = 0x18
    _Bool _useMockData;	// 25 = 0x19
    _Bool _forceDisplayReportJunk;	// 26 = 0x1a
    _Bool _forcePortraitBias;	// 27 = 0x1b
    _Bool _useSquareSharedAlbumActivity;	// 28 = 0x1c
    _Bool _disableSharedAlbumTopMargin;	// 29 = 0x1d
    _Bool _alwaysShowSuggestionRenderingOverlay;	// 30 = 0x1e
    _Bool _delayEditRenders;	// 31 = 0x1f
    _Bool _useCachedEditRenders;	// 32 = 0x20
    unsigned long long _maxSimultaneousVideoCount;	// 40 = 0x28
    double _minimumVisibilityForVideoPlayback;	// 48 = 0x30
    long long _sortingAlgorithm;	// 56 = 0x38
    unsigned long long _maxMemoriesToFetch;	// 64 = 0x40
}

+ (id)keyPathsAffectingGadgetVisibility;	// IMP=0x00000000004ab64f
+ (id)sharedInstance;	// IMP=0x00000000004ab61f
+ (id)settingsControllerModule;	// IMP=0x00000000003ae97b
@property(nonatomic) unsigned long long maxMemoriesToFetch; // @synthesize maxMemoriesToFetch=_maxMemoriesToFetch;
@property(nonatomic) long long sortingAlgorithm; // @synthesize sortingAlgorithm=_sortingAlgorithm;
@property(nonatomic) _Bool useCachedEditRenders; // @synthesize useCachedEditRenders=_useCachedEditRenders;
@property(nonatomic) _Bool delayEditRenders; // @synthesize delayEditRenders=_delayEditRenders;
@property(nonatomic) _Bool alwaysShowSuggestionRenderingOverlay; // @synthesize alwaysShowSuggestionRenderingOverlay=_alwaysShowSuggestionRenderingOverlay;
@property(nonatomic) _Bool disableSharedAlbumTopMargin; // @synthesize disableSharedAlbumTopMargin=_disableSharedAlbumTopMargin;
@property(nonatomic) _Bool useSquareSharedAlbumActivity; // @synthesize useSquareSharedAlbumActivity=_useSquareSharedAlbumActivity;
@property(nonatomic) _Bool forcePortraitBias; // @synthesize forcePortraitBias=_forcePortraitBias;
@property(nonatomic) _Bool forceDisplayReportJunk; // @synthesize forceDisplayReportJunk=_forceDisplayReportJunk;
@property(nonatomic) _Bool useMockData; // @synthesize useMockData=_useMockData;
@property(nonatomic) double minimumVisibilityForVideoPlayback; // @synthesize minimumVisibilityForVideoPlayback=_minimumVisibilityForVideoPlayback;
@property(nonatomic) unsigned long long maxSimultaneousVideoCount; // @synthesize maxSimultaneousVideoCount=_maxSimultaneousVideoCount;
@property(nonatomic) _Bool allowGIFPlayback; // @synthesize allowGIFPlayback=_allowGIFPlayback;
@property(nonatomic) _Bool allowLoopPlayback; // @synthesize allowLoopPlayback=_allowLoopPlayback;
@property(nonatomic) _Bool allowVideoPlayback; // @synthesize allowVideoPlayback=_allowVideoPlayback;
@property(nonatomic) _Bool showContentSyndication; // @synthesize showContentSyndication=_showContentSyndication;
@property(nonatomic) _Bool showHorizontalGadget; // @synthesize showHorizontalGadget=_showHorizontalGadget;
@property(nonatomic) _Bool showVerticalSampleGadgets; // @synthesize showVerticalSampleGadgets=_showVerticalSampleGadgets;
@property(nonatomic) _Bool showSampleSuggestionGadgets; // @synthesize showSampleSuggestionGadgets=_showSampleSuggestionGadgets;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(nonatomic) _Bool showHubbleSurveyQuestions; // @synthesize showHubbleSurveyQuestions=_showHubbleSurveyQuestions;
@property(nonatomic) _Bool showSurveyQuestionsWithProfile; // @synthesize showSurveyQuestionsWithProfile=_showSurveyQuestionsWithProfile;
@property(nonatomic) _Bool showSurveyQuestions; // @synthesize showSurveyQuestions=_showSurveyQuestions;
@property(nonatomic) _Bool showPeopleQuestions; // @synthesize showPeopleQuestions=_showPeopleQuestions;
@property(nonatomic) _Bool showRecentInterestSuggestions; // @synthesize showRecentInterestSuggestions=_showRecentInterestSuggestions;
@property(nonatomic) _Bool showCMMInvitations; // @synthesize showCMMInvitations=_showCMMInvitations;
@property(nonatomic) _Bool showCMMSuggestions; // @synthesize showCMMSuggestions=_showCMMSuggestions;
@property(nonatomic) _Bool showSharedAlbumActivity; // @synthesize showSharedAlbumActivity=_showSharedAlbumActivity;
@property(nonatomic) _Bool showMemories; // @synthesize showMemories=_showMemories;
- (long long)version;	// IMP=0x00000000004ab26a
- (void)setDefaultValues;	// IMP=0x00000000004aaebf
- (id)parentSettings;	// IMP=0x00000000004aaea6

@end

