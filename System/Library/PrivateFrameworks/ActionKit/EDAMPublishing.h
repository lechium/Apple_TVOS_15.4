//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMPublishing
{
    NSString *_uri;	// 8 = 0x8
    NSNumber *_order;	// 16 = 0x10
    NSNumber *_ascending;	// 24 = 0x18
    NSString *_publicDescription;	// 32 = 0x20
}

+ (id)structFields;	// IMP=0x0000000000226200
+ (id)structName;	// IMP=0x00000000002261f3
- (void).cxx_destruct;	// IMP=0x0000000000226419
@property(retain, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property(retain, nonatomic) NSNumber *ascending; // @synthesize ascending=_ascending;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;

@end
