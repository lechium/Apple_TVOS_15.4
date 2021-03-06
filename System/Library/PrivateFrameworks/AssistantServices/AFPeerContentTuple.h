//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFPeerInfo;

@interface AFPeerContentTuple : NSObject <NSCopying, NSSecureCoding>
{
    AFPeerInfo *_info;	// 8 = 0x8
    id _content;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000103e9e
- (void).cxx_destruct;	// IMP=0x0000000000104139
@property(readonly, copy, nonatomic) id content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) AFPeerInfo *info; // @synthesize info=_info;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000103f14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000103ea6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000103e93
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000103d4c
- (id)description;	// IMP=0x0000000000103ca1
- (id)initWithInfo:(id)arg1 content:(id)arg2;	// IMP=0x0000000000103afd

@end

