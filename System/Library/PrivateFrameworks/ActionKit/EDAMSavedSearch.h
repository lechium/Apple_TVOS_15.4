//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMSavedSearchScope, NSNumber, NSString;

@interface EDAMSavedSearch
{
    NSString *_guid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    NSNumber *_format;	// 32 = 0x20
    NSNumber *_updateSequenceNum;	// 40 = 0x28
    EDAMSavedSearchScope *_scope;	// 48 = 0x30
}

+ (id)structFields;	// IMP=0x000000000022689b
+ (id)structName;	// IMP=0x000000000022688e
- (void).cxx_destruct;	// IMP=0x0000000000226b8d
@property(retain, nonatomic) EDAMSavedSearchScope *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSNumber *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;

@end

