//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSString;

@interface USOSerializedGraphEdge : NSObject <NSSecureCoding>
{
    int _usoElementId;	// 8 = 0x8
    unsigned int _enumeration;	// 12 = 0xc
    unsigned long long _fromVertex;	// 16 = 0x10
    unsigned long long _toVertex;	// 24 = 0x18
    NSString *_edgeLabel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d86ce
- (void).cxx_destruct;	// IMP=0x00000000000d8b80
@property(retain, nonatomic) NSString *edgeLabel; // @synthesize edgeLabel=_edgeLabel;
@property unsigned int enumeration; // @synthesize enumeration=_enumeration;
@property unsigned long long toVertex; // @synthesize toVertex=_toVertex;
@property unsigned long long fromVertex; // @synthesize fromVertex=_fromVertex;
@property int usoElementId; // @synthesize usoElementId=_usoElementId;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d892a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d86d6
- (id)initWithUsoElementId:(int)arg1 fromVertex:(unsigned long long)arg2 toVertex:(unsigned long long)arg3 enumeration:(unsigned int)arg4;	// IMP=0x00000000000d86b6

@end
