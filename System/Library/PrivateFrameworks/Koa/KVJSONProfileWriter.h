//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVProfileWriter-Protocol.h>

@class NSOutputStream, NSString;

@interface KVJSONProfileWriter : NSObject <KVProfileWriter>
{
    NSOutputStream *_stream;	// 8 = 0x8
    unsigned int _datasetIdx;	// 16 = 0x10
    unsigned int _itemIdx;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000001286a
- (_Bool)finishProfile:(id *)arg1;	// IMP=0x00000000000126cd
- (_Bool)finishDataset:(id *)arg1;	// IMP=0x0000000000012507
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012060
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011cf0
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011ab7
- (id)initWithOutputStream:(id)arg1;	// IMP=0x0000000000011a30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

