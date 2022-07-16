//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@class NSArray, NSMutableData;

@interface DEMultiWriter : NSObject <DEWriter>
{
    NSMutableData *_data;	// 8 = 0x8
    NSArray *_writers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012b70d
@property(retain, nonatomic) NSArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void)writeData:(id)arg1;	// IMP=0x000000000012b574
- (void)close;	// IMP=0x000000000012b433
- (id)init;	// IMP=0x000000000012b41e
- (id)initWithWriters:(id)arg1;	// IMP=0x000000000012b38c

@end

