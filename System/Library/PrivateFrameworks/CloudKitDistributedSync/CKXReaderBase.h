//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKXSchema, NSData;

@interface CKXReaderBase : NSObject
{
    CKXSchema *_schema;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cf2d6
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) CKXSchema *schema; // @synthesize schema=_schema;
- (id)initWithSchema:(id)arg1;	// IMP=0x00000000000cf20c

@end

