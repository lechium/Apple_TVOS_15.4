//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKStreamLogStatsTuple : NSObject
{
    NSString *_fileAndLine;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000682f8
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *fileAndLine; // @synthesize fileAndLine=_fileAndLine;

@end

