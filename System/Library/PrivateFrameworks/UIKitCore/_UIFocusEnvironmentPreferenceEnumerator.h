//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContextDelegate-Protocol.h>

@class NSString, _UIDebugLogReport;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate>
{
    _Bool _allowsInferringPreferences;	// 8 = 0x8
    long long _enumerationMode;	// 16 = 0x10
    CDUnknownBlockType _didVisitAllPreferencesForEnvironmentHandler;	// 24 = 0x18
    CDUnknownBlockType _shouldInferPreferenceForEnvironmentHandler;	// 32 = 0x20
    _UIDebugLogReport *_debugReport;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005bfd8e
@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(copy, nonatomic) CDUnknownBlockType shouldInferPreferenceForEnvironmentHandler; // @synthesize shouldInferPreferenceForEnvironmentHandler=_shouldInferPreferenceForEnvironmentHandler;
@property(nonatomic) _Bool allowsInferringPreferences; // @synthesize allowsInferringPreferences=_allowsInferringPreferences;
@property(copy, nonatomic) CDUnknownBlockType didVisitAllPreferencesForEnvironmentHandler; // @synthesize didVisitAllPreferencesForEnvironmentHandler=_didVisitAllPreferencesForEnvironmentHandler;
@property(readonly, nonatomic) long long enumerationMode; // @synthesize enumerationMode=_enumerationMode;
- (_Bool)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg1;	// IMP=0x00000000005bfcbf
- (void)enumeratePreferencesForEnvironment:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000005bf61d
- (id)initWithEnumerationMode:(long long)arg1;	// IMP=0x00000000005bf5dc
- (id)init;	// IMP=0x00000000005bf5c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

