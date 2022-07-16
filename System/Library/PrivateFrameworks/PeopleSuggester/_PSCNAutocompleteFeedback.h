//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/BMStoreData-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSDate, NSString, _PSCNAutocompleteFeedbackEntered, _PSCNAutocompleteFeedbackErasedHandle, _PSCNAutocompleteFeedbackExited, _PSCNAutocompleteFeedbackTappedSuggestion, _PSCNAutocompleteFeedbackTypedHandle, _PSCNAutocompleteFeedbackVendedSuggestions;

@interface _PSCNAutocompleteFeedback : NSObject <BMStoreData, NSSecureCoding>
{
    _Bool _isImplicit;	// 8 = 0x8
    unsigned int _dataVersion;	// 12 = 0xc
    long long _feedbackType;	// 16 = 0x10
    NSDate *_reportTime;	// 24 = 0x18
    NSString *_userIdentifier;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSString *_sourceBundleIdentifier;	// 48 = 0x30
    _PSCNAutocompleteFeedbackEntered *_entered;	// 56 = 0x38
    _PSCNAutocompleteFeedbackExited *_exited;	// 64 = 0x40
    _PSCNAutocompleteFeedbackVendedSuggestions *_vendedSuggestions;	// 72 = 0x48
    _PSCNAutocompleteFeedbackTappedSuggestion *_tappedSuggestion;	// 80 = 0x50
    _PSCNAutocompleteFeedbackTypedHandle *_typedHandle;	// 88 = 0x58
    _PSCNAutocompleteFeedbackErasedHandle *_erasedHandle;	// 96 = 0x60
}

+ (id)createErasedHandleFeedbackWithBundleIdentifier:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000276d1
+ (id)createTypedHandleFeedbackWithBundleIdentifier:(id)arg1 contact:(id)arg2 viaContactPicker:(_Bool)arg3;	// IMP=0x0000000000027605
+ (id)createTappedSuggestionFeedbackWithBundleIdentifier:(id)arg1 suggestion:(id)arg2;	// IMP=0x0000000000027546
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg1 suggestions:(id)arg2;	// IMP=0x0000000000027531
+ (id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg1 suggestions:(id)arg2 isImplicit:(_Bool)arg3;	// IMP=0x0000000000027466
+ (id)createExitedFeedbackWithBundleIdentifier:(id)arg1 status:(long long)arg2;	// IMP=0x00000000000273ba
+ (id)createEnteredFeedbackWithBundleIdentifier:(id)arg1 status:(long long)arg2;	// IMP=0x000000000002730d
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000002715d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027155
- (void).cxx_destruct;	// IMP=0x00000000000278ca
@property(copy, nonatomic) _PSCNAutocompleteFeedbackErasedHandle *erasedHandle; // @synthesize erasedHandle=_erasedHandle;
@property(copy, nonatomic) _PSCNAutocompleteFeedbackTypedHandle *typedHandle; // @synthesize typedHandle=_typedHandle;
@property(copy, nonatomic) _PSCNAutocompleteFeedbackTappedSuggestion *tappedSuggestion; // @synthesize tappedSuggestion=_tappedSuggestion;
@property(copy, nonatomic) _PSCNAutocompleteFeedbackVendedSuggestions *vendedSuggestions; // @synthesize vendedSuggestions=_vendedSuggestions;
@property(copy, nonatomic) _PSCNAutocompleteFeedbackExited *exited; // @synthesize exited=_exited;
@property(copy, nonatomic) _PSCNAutocompleteFeedbackEntered *entered; // @synthesize entered=_entered;
@property(nonatomic) _Bool isImplicit; // @synthesize isImplicit=_isImplicit;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) NSDate *reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(nonatomic) long long feedbackType; // @synthesize feedbackType=_feedbackType;
- (id)serialize;	// IMP=0x000000000002724f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026ffc
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026174
- (id)initWithDataVersion:(unsigned int)arg1 reportTime:(id)arg2 userIdentifier:(id)arg3 bundleIdentifier:(id)arg4 sourceBundleIdentifier:(id)arg5 isImplicit:(_Bool)arg6 feedbackType:(long long)arg7 entered:(id)arg8 exited:(id)arg9 vendedSuggestions:(id)arg10 tappedSuggestion:(id)arg11 typedHandle:(id)arg12 erasedHandle:(id)arg13;	// IMP=0x0000000000025f55
- (id)initWithBundleIdentifier:(id)arg1 feedbackType:(long long)arg2 isImplicit:(_Bool)arg3 entered:(id)arg4 exited:(id)arg5 vendedSuggestions:(id)arg6 tappedSuggestion:(id)arg7 typedHandle:(id)arg8 erasedHandle:(id)arg9;	// IMP=0x0000000000025dac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
