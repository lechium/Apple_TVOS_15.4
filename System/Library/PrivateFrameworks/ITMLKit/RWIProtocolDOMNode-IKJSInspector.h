//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolDOMNode.h>

@interface RWIProtocolDOMNode (IKJSInspector)
+ (id)ik_nodeFromDOMNode:(id)arg1;	// IMP=0x00000000000174c3
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;	// IMP=0x00000000000172a3
+ (id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;	// IMP=0x00000000000cee18
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(_Bool)arg2 dispatcher:(id)arg3;	// IMP=0x000000000001833f
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;	// IMP=0x0000000000018328
- (id)ik_nodeWithNodeId:(int)arg1;	// IMP=0x000000000001818f
- (id)ik_description;	// IMP=0x00000000000180c0
- (void)ik_insertChild:(id)arg1 before:(id)arg2;	// IMP=0x0000000000017f3d
- (void)ik_removeChildWithId:(int)arg1;	// IMP=0x0000000000017e14
- (void)ik_removeAttributeNamed:(id)arg1;	// IMP=0x0000000000017ce4
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;	// IMP=0x0000000000017a7d
- (id)ik_attributesDictionary;	// IMP=0x000000000001790d
@end
