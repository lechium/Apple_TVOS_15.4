//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKDOMObserver-Protocol.h>
#import <ITMLKit/IKJSDOMNodeList-Protocol.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMNodeList <IKDOMObserver, IKJSDOMNodeList>
{
    IKDOMNode *_contextNode;	// 8 = 0x8
    CDUnknownBlockType _evaluationBlock;	// 16 = 0x10
    NSArray *_nodes;	// 24 = 0x18
}

+ (id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3;	// IMP=0x000000000007e028
- (void).cxx_destruct;	// IMP=0x000000000007e978
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property(readonly, copy, nonatomic) CDUnknownBlockType evaluationBlock; // @synthesize evaluationBlock=_evaluationBlock;
@property(retain, nonatomic) IKDOMNode *contextNode; // @synthesize contextNode=_contextNode;
- (void)_updateNodes;	// IMP=0x000000000007e616
- (void)domDidUpdateForContextNode:(id)arg1;	// IMP=0x000000000007e402
- (id)item:(long long)arg1;	// IMP=0x000000000007e373
@property(readonly, nonatomic) long long length;
- (id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007e1be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

