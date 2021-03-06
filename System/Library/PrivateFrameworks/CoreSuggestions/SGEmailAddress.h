//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SGEmailAddress
{
    NSString *_emailAddress;	// 8 = 0x8
}

+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4;	// IMP=0x0000000000048704
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5;	// IMP=0x00000000000486eb
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4;	// IMP=0x000000000004863a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000048632
- (void).cxx_destruct;	// IMP=0x000000000004861f
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (id)description;	// IMP=0x0000000000048540
- (unsigned long long)hash;	// IMP=0x0000000000048523
- (_Bool)isEqualToEmailAddress:(id)arg1;	// IMP=0x00000000000484bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048453
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000483d6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004833b
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4;	// IMP=0x00000000000482a3

@end

