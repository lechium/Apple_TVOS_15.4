//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableCharacterSet, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface GEORisonParser : NSObject
{
    NSNumberFormatter *_formatter;	// 8 = 0x8
    NSMutableCharacterSet *_risonTerminators;	// 16 = 0x10
    NSMutableCharacterSet *_risonEscapes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001122e1f
- (id)stringFromNull:(id)arg1;	// IMP=0x0000000001122e12
- (id)stringFromNumber:(id)arg1;	// IMP=0x0000000001122d7e
- (id)stringFromString:(id)arg1;	// IMP=0x0000000001122b68
- (id)stringFromArray:(id)arg1;	// IMP=0x00000000011229e5
- (id)stringFromDictionary:(id)arg1;	// IMP=0x00000000011227c3
- (id)stringFromRisonObject:(id)arg1;	// IMP=0x00000000011226bf
- (id)numberWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000011225db
- (id)boolWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x000000000112258b
- (id)nullWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x000000000112256d
- (id)stringLiteralWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x0000000001122385
- (id)arrayWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000011222be
- (id)keyWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x0000000001122237
- (id)dictionaryWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x000000000112211f
- (id)objectWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x0000000001122094
- (id)objectFromRisonString:(id)arg1;	// IMP=0x0000000001121ff0
- (id)init;	// IMP=0x0000000001121edb

@end

