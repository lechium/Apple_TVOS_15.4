//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison
{
    NSString *_recordKey;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000185aa0
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
- (id)stringRepresentationWithRecordType:(id)arg1;	// IMP=0x0000000000185849

@end
