//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMXPathResult-Protocol.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMXPathResult <IKJSDOMXPathResult>
{
    long long _type;	// 8 = 0x8
    NSArray *_nodes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b4664
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
@property long long type; // @synthesize type=_type;
- (id)snapshotItem:(long long)arg1;	// IMP=0x00000000000b44c3
- (id)iterateNext;	// IMP=0x00000000000b4417
@property(readonly, nonatomic) long long snapshotLength;
@property(readonly, nonatomic) _Bool invalidIteratorState;
@property(readonly, nonatomic) __weak IKDOMNode *singleNodeValue;
@property(readonly, nonatomic) _Bool booleanValue;
@property(readonly, nonatomic) __weak NSString *stringValue;
@property(readonly, nonatomic) long long numberValue;
@property(readonly, nonatomic) long long resultType;
- (id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3;	// IMP=0x00000000000b3d4b

@end

