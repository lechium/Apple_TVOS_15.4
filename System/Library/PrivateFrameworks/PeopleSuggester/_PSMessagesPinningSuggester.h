//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSXPCConnection, _CDInteractionStore;

@interface _PSMessagesPinningSuggester : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _Bool _boostGroups;	// 24 = 0x18
    _Bool _outgoingOnly;	// 25 = 0x19
    _Bool _boostIndividualFavorites;	// 26 = 0x1a
    _CDInteractionStore *_interactionStore;	// 32 = 0x20
    NSDictionary *_psMessagesPinningConfig;	// 40 = 0x28
    double _regularityThreshold;	// 48 = 0x30
    double _intensityThreshold;	// 56 = 0x38
    double _regularityWeight;	// 64 = 0x40
    double _intensityWeight;	// 72 = 0x48
    long long _minimalInteractions;	// 80 = 0x50
    long long _minimalUniqueDaysInteracted;	// 88 = 0x58
    double _lookbackWindow;	// 96 = 0x60
    NSString *_configVersion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003d289
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(nonatomic) _Bool boostIndividualFavorites; // @synthesize boostIndividualFavorites=_boostIndividualFavorites;
@property(nonatomic) _Bool outgoingOnly; // @synthesize outgoingOnly=_outgoingOnly;
@property(nonatomic) _Bool boostGroups; // @synthesize boostGroups=_boostGroups;
@property(nonatomic) double lookbackWindow; // @synthesize lookbackWindow=_lookbackWindow;
@property(nonatomic) long long minimalUniqueDaysInteracted; // @synthesize minimalUniqueDaysInteracted=_minimalUniqueDaysInteracted;
@property(nonatomic) long long minimalInteractions; // @synthesize minimalInteractions=_minimalInteractions;
@property(nonatomic) double intensityWeight; // @synthesize intensityWeight=_intensityWeight;
@property(nonatomic) double regularityWeight; // @synthesize regularityWeight=_regularityWeight;
@property(nonatomic) double intensityThreshold; // @synthesize intensityThreshold=_intensityThreshold;
@property(nonatomic) double regularityThreshold; // @synthesize regularityThreshold=_regularityThreshold;
@property(retain) NSDictionary *psMessagesPinningConfig; // @synthesize psMessagesPinningConfig=_psMessagesPinningConfig;
@property(retain, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (id)getPayloadOfFeedback:(id)arg1;	// IMP=0x000000000003cb6f
- (void)submitMessagesPinningFeedback:(id)arg1;	// IMP=0x000000000003c8ec
- (void)provideMessagesPinningFeedback:(id)arg1;	// IMP=0x000000000003c7e1
- (id)chatGuidsBasedOnRegularityAndIntensityWithMaxSuggestions:(long long)arg1 referenceDate:(id)arg2 minimumDaysOfHistory:(long long)arg3 maxInteractionsForQuery:(long long)arg4;	// IMP=0x000000000003a621
- (id)chatGuidsForPinningHeuristicApproachWithMaxSuggestions:(long long)arg1 forReferenceDate:(id)arg2;	// IMP=0x000000000003a5a2
- (id)chatGuidsForMessagesPinningWithMaxSuggestions:(long long)arg1;	// IMP=0x000000000003a34b
- (id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8 outgoingOnly:(_Bool)arg9;	// IMP=0x000000000003a12c
- (id)initWithRegularityThreshold:(double)arg1 intensityThreshold:(double)arg2 regularityWeight:(double)arg3 intensityWeight:(double)arg4 minimalInteration:(long long)arg5 minimalUniqueDaysInteracted:(long long)arg6 interactionStore:(id)arg7 lookbackWindow:(double)arg8;	// IMP=0x000000000003a111
- (id)init;	// IMP=0x000000000003a0cb
- (void)updateModelProperties:(id)arg1;	// IMP=0x0000000000039f68
- (_Bool)loadPSConfig:(id)arg1;	// IMP=0x0000000000039db9

@end

