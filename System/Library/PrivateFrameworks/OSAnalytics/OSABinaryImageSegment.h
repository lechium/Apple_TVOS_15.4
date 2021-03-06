//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject
{
    int _source;	// 8 = 0x8
    OSASymbolInfo *_symbolInfo;	// 16 = 0x10
    unsigned long long _used_index;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002540e
@property unsigned long long used_index; // @synthesize used_index=_used_index;
@property int source; // @synthesize source=_source;
@property(readonly, nonatomic) OSASymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
- (id)full_details;	// IMP=0x000000000002518a
- (id)details;	// IMP=0x0000000000025079
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char [16])arg3;	// IMP=0x0000000000025005
- (id)initWithSymbol:(id)arg1;	// IMP=0x0000000000024f8b

@end

