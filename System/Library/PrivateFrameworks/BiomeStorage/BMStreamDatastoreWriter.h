//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject
{
    BMStreamDatastore *_inner;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000016b5c
@property(readonly, nonatomic) _Bool canReadOrPruneData;
- (void)syncMappedFiles;	// IMP=0x0000000000016b30
- (id)streamIdentifier;	// IMP=0x0000000000016b1a
- (_Bool)_writeEventData:(id)arg1 dataVersion:(unsigned int)arg2 timestamp:(double)arg3 outBookmark:(id *)arg4;	// IMP=0x0000000000016b04
- (_Bool)writeEventWithEventBody:(id)arg1;	// IMP=0x0000000000016aee
- (id)initWithStream:(id)arg1 config:(id)arg2;	// IMP=0x0000000000016a3f
- (_Bool)writeEventBodyClass:(Class)arg1;	// IMP=0x0000000000016a29
- (Class)eventBodyClass;	// IMP=0x0000000000016a13
- (_Bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000016b6c

@end

