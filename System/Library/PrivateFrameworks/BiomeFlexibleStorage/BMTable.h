//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMTableSchema, NSArray;

@interface BMTable : NSObject
{
    NSArray *_rows;	// 8 = 0x8
    BMTableSchema *_schema;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003320
@property(retain, nonatomic) BMTableSchema *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (id)description;	// IMP=0x0000000000003259
- (id)initWithRows:(id)arg1 schema:(id)arg2;	// IMP=0x00000000000031b5
- (id)init;	// IMP=0x00000000000031af

@end

