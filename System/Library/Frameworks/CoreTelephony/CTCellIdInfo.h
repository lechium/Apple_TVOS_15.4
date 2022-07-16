//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_cellId;	// 8 = 0x8
    NSNumber *_baseId;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002af52
+ (id)cellIdInfoFromCellId:(unsigned long long)arg1 baseId:(int)arg2;	// IMP=0x000000000002abbf
- (void).cxx_destruct;	// IMP=0x000000000002af6e
@property(readonly, nonatomic) NSNumber *baseId; // @synthesize baseId=_baseId;
@property(readonly, nonatomic) NSNumber *cellId; // @synthesize cellId=_cellId;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ae78
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002adca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad3a
- (id)description;	// IMP=0x000000000002ac50

@end

