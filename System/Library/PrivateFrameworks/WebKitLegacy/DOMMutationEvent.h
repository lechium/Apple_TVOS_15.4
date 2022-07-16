//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMNode, NSString;

@interface DOMMutationEvent
{
}

- (void)initMutationEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8;	// IMP=0x00000000000899d0
@property(readonly) unsigned short attrChange;
@property(readonly, copy) NSString *attrName;
@property(readonly, copy) NSString *newValue;
@property(readonly, copy) NSString *prevValue;
@property(readonly) DOMNode *relatedNode;
- (void)initMutationEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7:(unsigned short)arg8;	// IMP=0x0000000000089c90

@end

