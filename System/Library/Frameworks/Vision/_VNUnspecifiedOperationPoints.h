//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VNUnspecifiedOperationPoints
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000119939
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001194ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001194e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000119499
- (_Bool)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x0000000000119431
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001193ff
- (_Bool)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;	// IMP=0x00000000001193cd
- (_Bool)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;	// IMP=0x000000000011939b
- (_Bool)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000119369

@end

