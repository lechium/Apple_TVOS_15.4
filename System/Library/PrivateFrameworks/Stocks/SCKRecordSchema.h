//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCKRecordSchema : NSObject
{
    NSString *_recordType;	// 8 = 0x8
    NSArray *_fieldSchemas;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002d2cb
@property(readonly, copy, nonatomic) NSArray *fieldSchemas; // @synthesize fieldSchemas=_fieldSchemas;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (_Bool)isValidRecord:(id)arg1;	// IMP=0x000000000002d0e4
- (id)schemaForFieldName:(id)arg1;	// IMP=0x000000000002cf11
@property(readonly, copy, nonatomic) NSArray *fieldNames;
- (id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2;	// IMP=0x000000000002cca8

@end

