//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTCellInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_legacyInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f653
- (void).cxx_destruct;	// IMP=0x000000000006f676
@property(retain, nonatomic) NSArray *legacyInfo; // @synthesize legacyInfo=_legacyInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f508
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f48f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006f3fb
- (id)description;	// IMP=0x000000000006f368

@end

