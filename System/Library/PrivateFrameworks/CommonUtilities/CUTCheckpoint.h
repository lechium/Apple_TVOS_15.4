//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CommonUtilities/NSCopying-Protocol.h>
#import <CommonUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _frozen;	// 8 = 0x8
    _Bool _assertsUseAfterFreeze;	// 9 = 0x9
    _Bool _shouldLogTouches;	// 10 = 0xa
    NSString *_name;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
}

+ (id)_reportDateFormatter;	// IMP=0x00000000000036f7
+ (id)_allowlistedClasses;	// IMP=0x00000000000026b3
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000026ab
- (void).cxx_destruct;	// IMP=0x00000000000037c9
@property(nonatomic) _Bool shouldLogTouches; // @synthesize shouldLogTouches=_shouldLogTouches;
@property(nonatomic) _Bool assertsUseAfterFreeze; // @synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_reportEndDate;	// IMP=0x0000000000003789
- (id)_reportStartDate;	// IMP=0x0000000000003781
- (id)_reportName;	// IMP=0x000000000000376f
- (id)_reportMetadata;	// IMP=0x0000000000003767
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;	// IMP=0x000000000000322e
- (id)report;	// IMP=0x000000000000317a
- (id)_freezeBacktrace;	// IMP=0x0000000000003172
- (_Bool)_assertNotFrozen;	// IMP=0x00000000000030d4
- (_Bool)isFrozen;	// IMP=0x00000000000030cb
- (void)_freeze;	// IMP=0x00000000000030c1
- (void)freeze;	// IMP=0x000000000000308a
- (id)description;	// IMP=0x0000000000002fc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002ddc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002bf2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002a09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000027ae
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x0000000000002608

@end

