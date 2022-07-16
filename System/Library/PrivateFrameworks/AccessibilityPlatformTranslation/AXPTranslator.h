//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AXPTranslationDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate, AXPTranslationTokenDelegateHelper;

@interface AXPTranslator : NSObject
{
    _Bool _accessibilityEnabled;	// 8 = 0x8
    _Bool _supportsDelegateTokens;	// 9 = 0x9
    id <AXPTranslationDelegateHelper> _bridgeDelegate;	// 16 = 0x10
    id <AXPTranslationTokenDelegateHelper> _bridgeTokenDelegate;	// 24 = 0x18
    id <AXPTranslationRuntimeHelper> _runtimeDelegate;	// 32 = 0x20
    id <AXPTranslationSystemAppDelegate> _systemAppDelegate;	// 40 = 0x28
    NSMutableDictionary *_fakeElementCache;	// 48 = 0x30
}

+ (id)sharediOSInstance;	// IMP=0x000000000000e04b
+ (id)sharedInstance;	// IMP=0x000000000000dfae
- (void).cxx_destruct;	// IMP=0x000000000000f45a
@property(nonatomic) _Bool supportsDelegateTokens; // @synthesize supportsDelegateTokens=_supportsDelegateTokens;
@property(retain, nonatomic) NSMutableDictionary *fakeElementCache; // @synthesize fakeElementCache=_fakeElementCache;
@property(nonatomic) __weak id <AXPTranslationSystemAppDelegate> systemAppDelegate; // @synthesize systemAppDelegate=_systemAppDelegate;
@property(nonatomic) __weak id <AXPTranslationRuntimeHelper> runtimeDelegate; // @synthesize runtimeDelegate=_runtimeDelegate;
@property(nonatomic) __weak id <AXPTranslationTokenDelegateHelper> bridgeTokenDelegate; // @synthesize bridgeTokenDelegate=_bridgeTokenDelegate;
@property(nonatomic) __weak id <AXPTranslationDelegateHelper> bridgeDelegate; // @synthesize bridgeDelegate=_bridgeDelegate;
@property(nonatomic) _Bool accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
- (id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2;	// IMP=0x0000000000011aec
- (id)translationObjectFromData:(id)arg1;	// IMP=0x0000000000011ac5
- (id)platformElementFromTranslation:(id)arg1;	// IMP=0x0000000000011a9e
- (void)initializeAXRuntimeForSystemAppServer;	// IMP=0x0000000000011a7a
- (void)enableAccessibility;	// IMP=0x0000000000011a56
- (void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0000000000011a32
- (CDUnknownBlockType)attributedStringConversionBlock;	// IMP=0x0000000000011a0b
- (id)processSupportsAttributes:(id)arg1;	// IMP=0x00000000000119e4
- (id)processSupportedActions:(id)arg1;	// IMP=0x00000000000119bd
- (id)processFrontMostApp:(id)arg1;	// IMP=0x0000000000011996
- (id)processHitTest:(id)arg1;	// IMP=0x000000000001196f
- (id)processAttributeRequest:(id)arg1;	// IMP=0x0000000000011948
- (id)processCanSetAttribute:(id)arg1;	// IMP=0x0000000000011921
- (id)processSetAttribute:(id)arg1;	// IMP=0x00000000000118fa
- (id)processActionRequest:(id)arg1;	// IMP=0x00000000000118d3
- (id)processMultipleAttributeRequest:(id)arg1;	// IMP=0x00000000000118ac
- (id)iosPlatformElementFromTranslation:(id)arg1;	// IMP=0x000000000000eff5
- (id)objectAtPoint:(struct CGPoint)arg1 displayId:(unsigned int)arg2 bridgeDelegateToken:(id)arg3;	// IMP=0x000000000000ef09
- (id)processTranslatorRequest:(id)arg1;	// IMP=0x000000000000ee3f
- (id)platformTranslator;	// IMP=0x000000000000ee26
- (id)sendTranslatorRequest:(id)arg1;	// IMP=0x000000000000eb0a
- (void)_resetBridgeTokensForResponse:(id)arg1 bridgeDelegateToken:(id)arg2;	// IMP=0x000000000000e7cc
- (void)handleNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3;	// IMP=0x000000000000e40b
- (id)frontmostApplicationWithDisplayId:(unsigned int)arg1 bridgeDelegateToken:(id)arg2;	// IMP=0x000000000000e275
- (id)_translationApplicationObjectForPidNumber:(id)arg1;	// IMP=0x000000000000e144
- (id)translationApplicationObjectForPid:(int)arg1;	// IMP=0x000000000000e0de
- (id)translationApplicationObject;	// IMP=0x000000000000e0ca
- (id)init;	// IMP=0x000000000000e064

@end
