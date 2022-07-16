//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSURL;

@interface _PHVariationInMemoryCachedValue : NSObject
{
    NSDictionary *_info;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    NSDate *_expectedDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c9151
@property(readonly, nonatomic) NSDate *expectedDate; // @synthesize expectedDate=_expectedDate;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) _Bool isValid;
- (id)_currentFileModificationDate;	// IMP=0x00000000000c8f00
- (id)initWithInfo:(id)arg1 fileURL:(id)arg2;	// IMP=0x00000000000c8e06

@end

