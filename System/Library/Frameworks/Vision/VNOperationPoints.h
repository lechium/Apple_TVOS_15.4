//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VNOperationPoints : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000119931
+ (id)loadFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001198f7
+ (id)unspecifiedOperationPoints;	// IMP=0x00000000001198de
+ (id)errorForUnknownClassificationIdentifier:(id)arg1;	// IMP=0x0000000000119874
+ (id)errorForUnimplementedMethod:(SEL)arg1;	// IMP=0x00000000001197bd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000119739
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001196c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001196ba
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000119676
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000119632
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001195ee
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001195aa
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000119566

@end

