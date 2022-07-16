//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface VCPVNImageprintWrapper : NSObject
{
    int _version;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

+ (id)generateVNImageprintWithType:(unsigned long long)arg1 archiveData:(id)arg2 andError:(id *)arg3;	// IMP=0x000000000006c84b
+ (id)wrapperWithImageprintType:(unsigned long long)arg1 version:(int)arg2 andData:(id)arg3;	// IMP=0x000000000006c7da
- (void).cxx_destruct;	// IMP=0x000000000006d733
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x000000000006d5ae
- (_Bool)calculateDistance:(float *)arg1 toWrapper:(id)arg2 andError:(id *)arg3;	// IMP=0x000000000006ca02
- (id)initWithImageprintType:(unsigned long long)arg1 version:(int)arg2 andData:(id)arg3;	// IMP=0x000000000006c722

@end
