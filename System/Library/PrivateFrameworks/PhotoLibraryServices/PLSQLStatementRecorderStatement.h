//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PLSQLStatementRecorderStatement : NSObject
{
    _Bool _isSearch;	// 8 = 0x8
    unsigned int _vmSteps;	// 12 = 0xc
    unsigned int _fullscanSteps;	// 16 = 0x10
    unsigned int _qos;	// 20 = 0x14
    NSString *_normalizedStatementSQL;	// 24 = 0x18
    NSString *_statementSQL;	// 32 = 0x20
    NSString *_queryPlan;	// 40 = 0x28
    NSString *_mocName;	// 48 = 0x30
    long long _pagesHit;	// 56 = 0x38
    long long _pagesMissed;	// 64 = 0x40
    NSArray *_firstBacktrace;	// 72 = 0x48
    unsigned long long _backtraceHash;	// 80 = 0x50
    double _time;	// 88 = 0x58
    double _duration;	// 96 = 0x60
    NSString *_statusMessage;	// 104 = 0x68
    long long _photoLibraryID;	// 112 = 0x70
}

+ (long long)libraryForDbURL:(id)arg1;	// IMP=0x000000000059fa57
+ (_Bool)isInternalForStatementSQL:(id)arg1;	// IMP=0x000000000059f8f5
- (void).cxx_destruct;	// IMP=0x00000000005a06dc
@property(nonatomic) _Bool isSearch; // @synthesize isSearch=_isSearch;
@property(nonatomic) long long photoLibraryID; // @synthesize photoLibraryID=_photoLibraryID;
@property(retain, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic) unsigned int fullscanSteps; // @synthesize fullscanSteps=_fullscanSteps;
@property(nonatomic) unsigned int vmSteps; // @synthesize vmSteps=_vmSteps;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long backtraceHash; // @synthesize backtraceHash=_backtraceHash;
@property(retain, nonatomic) NSArray *firstBacktrace; // @synthesize firstBacktrace=_firstBacktrace;
@property(nonatomic) long long pagesMissed; // @synthesize pagesMissed=_pagesMissed;
@property(nonatomic) long long pagesHit; // @synthesize pagesHit=_pagesHit;
@property(retain, nonatomic) NSString *mocName; // @synthesize mocName=_mocName;
@property(retain, nonatomic) NSString *queryPlan; // @synthesize queryPlan=_queryPlan;
@property(retain, nonatomic) NSString *statementSQL; // @synthesize statementSQL=_statementSQL;
@property(retain, nonatomic) NSString *normalizedStatementSQL; // @synthesize normalizedStatementSQL=_normalizedStatementSQL;
@property(readonly, nonatomic) _Bool isInternal;
- (id)jsonFragmentData;	// IMP=0x00000000005a0310
- (id)_dictionaryRepresentation;	// IMP=0x000000000059fc11

@end
