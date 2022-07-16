//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/NSCopying-Protocol.h>
#import <MultipeerConnectivity/NSSecureCoding-Protocol.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding>
{
    MCPeerIDInternal *_internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000337e4
- (unsigned long long)hash;	// IMP=0x0000000000033f64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033f00
- (id)serializedRepresentation;	// IMP=0x0000000000033d62
- (id)initWithSerializedRepresentation:(id)arg1;	// IMP=0x0000000000033a8a
- (id)initWithDisplayName:(id)arg1;	// IMP=0x000000000003385b
- (id)init;	// IMP=0x0000000000033827
- (void)dealloc;	// IMP=0x00000000000337ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033777
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003361f
- (id)initWithIDString:(id)arg1 displayName:(id)arg2;	// IMP=0x0000000000033581
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2;	// IMP=0x00000000000333f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000333e6
- (id)displayNameAndPID;	// IMP=0x0000000000033389
- (id)internalDescription;	// IMP=0x00000000000332f0
- (id)description;	// IMP=0x000000000003328d
@property(readonly, nonatomic) NSString *displayName;
- (unsigned int)pid;	// IMP=0x000000000003323d
- (id)idString;	// IMP=0x0000000000033209
- (unsigned long long)pid64;	// IMP=0x00000000000331f3

@end

