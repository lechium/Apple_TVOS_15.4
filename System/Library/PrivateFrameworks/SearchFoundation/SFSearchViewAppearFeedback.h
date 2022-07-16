//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SFSearchViewAppearFeedback
{
    _Bool _isOnLockScreen;	// 24 = 0x18
    _Bool _isOverApp;	// 25 = 0x19
    _Bool _readerTextAvailable;	// 26 = 0x1a
    _Bool _isUsingLoweredSearchBar;	// 27 = 0x1b
    unsigned long long _viewAppearEvent;	// 32 = 0x20
    NSString *_preexistingInput;	// 40 = 0x28
    NSString *_originatingApp;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000192066
- (void).cxx_destruct;	// IMP=0x0000000000192035
@property(nonatomic) _Bool isUsingLoweredSearchBar; // @synthesize isUsingLoweredSearchBar=_isUsingLoweredSearchBar;
@property(copy, nonatomic) NSString *originatingApp; // @synthesize originatingApp=_originatingApp;
@property(copy, nonatomic) NSString *preexistingInput; // @synthesize preexistingInput=_preexistingInput;
@property(nonatomic) _Bool readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) unsigned long long viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000191e16
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000191c95
- (id)initWithEvent:(unsigned long long)arg1;	// IMP=0x0000000000191c51

@end

