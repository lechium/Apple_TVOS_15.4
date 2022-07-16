//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SCROBrailleLineVirtualStatus : NSObject
{
    int _alignment;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    long long _length;	// 24 = 0x18
    char *_cells;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025fea
@property(nonatomic) char *cells; // @synthesize cells=_cells;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;	// IMP=0x0000000000025f56

@end

