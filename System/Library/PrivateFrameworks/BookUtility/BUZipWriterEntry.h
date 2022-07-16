//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface BUZipWriterEntry : NSObject
{
    unsigned int _CRC;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_lastModificationDate;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    unsigned long long _offset;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000c50a
@property(nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

