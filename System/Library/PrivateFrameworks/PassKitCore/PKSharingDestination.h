//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_destinationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e37e5
- (void).cxx_destruct;	// IMP=0x00000000003e3b19
- (id)_name;	// IMP=0x00000000003e3a4d
- (id)description;	// IMP=0x00000000003e39c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e3964
- (unsigned long long)hash;	// IMP=0x00000000003e38fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e38a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e387e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e37ed
- (id)idsDestination;	// IMP=0x00000000003e377c
- (id)initWithDestinationIdentifier:(id)arg1;	// IMP=0x00000000003e3711

@end
