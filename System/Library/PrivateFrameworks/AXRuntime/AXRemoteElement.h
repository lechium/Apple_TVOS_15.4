//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol AXRemoteElementChildrenDelegate;

@interface AXRemoteElement : NSObject
{
    NSString *_uuid;	// 8 = 0x8
    int _remotePid;	// 16 = 0x10
    unsigned int _contextId;	// 20 = 0x14
    _Bool _onClientSide;	// 24 = 0x18
    NSMutableSet *_allChildren;	// 32 = 0x20
    _Bool _deniesDirectAppConnection;	// 40 = 0x28
    unsigned int _machPort;	// 44 = 0x2c
    id <AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;	// 48 = 0x30
    id _accessibilityContainer;	// 56 = 0x38
}

+ (_Bool)registerRemoteElement:(id)arg1;	// IMP=0x0000000000024dde
+ (id)remoteElementsForContextId:(unsigned int)arg1;	// IMP=0x0000000000024d58
+ (id)remoteElementsForBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024c20
+ (id)registeredRemoteElements;	// IMP=0x0000000000024bff
+ (id)remoteElementForBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024baf
+ (_Bool)_isSerializableAccessibilityElement;	// IMP=0x000000000002362f
+ (void)initialize;	// IMP=0x00000000000235bd
- (void).cxx_destruct;	// IMP=0x0000000000025b6d
@property(nonatomic) _Bool deniesDirectAppConnection; // @synthesize deniesDirectAppConnection=_deniesDirectAppConnection;
@property(nonatomic) __weak id accessibilityContainer; // @synthesize accessibilityContainer=_accessibilityContainer;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
@property(nonatomic) __weak id <AXRemoteElementChildrenDelegate> remoteChildrenDelegate; // @synthesize remoteChildrenDelegate=_remoteChildrenDelegate;
@property(nonatomic) _Bool onClientSide; // @synthesize onClientSide=_onClientSide;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int remotePid; // @synthesize remotePid=_remotePid;
- (_Bool)_accessibilitySetNativeFocus;	// IMP=0x0000000000025a77
- (void)_accessibilitySetFocusOnElement:(_Bool)arg1;	// IMP=0x0000000000025a2b
- (id)description;	// IMP=0x00000000000258d8
- (void)_accessibilityIncreaseSelection:(id)arg1;	// IMP=0x0000000000025866
- (_Bool)_accessibilityHasVisibleFrame;	// IMP=0x00000000000256a5
- (struct CGRect)accessibilityFrame;	// IMP=0x00000000000253c0
@property(readonly, nonatomic) struct CGRect containerAccessibilityFrame;
- (void)unregister;	// IMP=0x0000000000025354
- (id)accessibilityElements;	// IMP=0x0000000000024979
- (unsigned long long)_accessibilityAutomationType;	// IMP=0x000000000002496e
- (id)_accessibilitySortedElementsWithin;	// IMP=0x000000000002490f
- (_Bool)_accessibilityIsGroupedParent;	// IMP=0x0000000000024907
- (id)_accessibilityLastElement;	// IMP=0x00000000000248eb
- (id)_accessibilityFirstElement;	// IMP=0x00000000000248cf
- (id)_accessibilityResponderElement;	// IMP=0x00000000000248b3
- (id)_accessibilityActiveKeyboard;	// IMP=0x000000000002489a
- (id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(_Bool)arg2;	// IMP=0x000000000002419e
- (void)getLeafElementsFromRemoteSide:(CDUnknownBlockType)arg1;	// IMP=0x000000000002401d
- (void)_getRemoteValuesOffMainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023d58
@property(readonly, nonatomic) unsigned long long uuidHash;
- (void)dealloc;	// IMP=0x0000000000023baa
- (id)_accessibilityHandwritingElement;	// IMP=0x000000000002386c
- (id)_accessibilityTextViewTextOperationResponder;	// IMP=0x0000000000023801
- (id)_accessibilityTextOperations;	// IMP=0x00000000000237b1
- (unsigned int)_accessibilityContextId;	// IMP=0x0000000000023754
- (void)platformCleanup;	// IMP=0x000000000002374e
@property(readonly, nonatomic) unsigned int localHostingWindowContextId;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;	// IMP=0x0000000000023637

@end

