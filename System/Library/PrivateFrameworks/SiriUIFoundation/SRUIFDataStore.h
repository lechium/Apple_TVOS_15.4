//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SRUIFDataStore : NSObject
{
    NSMutableDictionary *_entries;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000334b
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x0000000000002d31
- (id)propertyListRepresentation;	// IMP=0x0000000000002b98
- (id)imageDataForKey:(id)arg1;	// IMP=0x0000000000002ad8
- (void)setImageData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000002a41
- (id)init;	// IMP=0x00000000000029e7
- (id)initWithEntries:(id)arg1;	// IMP=0x0000000000002974

@end
