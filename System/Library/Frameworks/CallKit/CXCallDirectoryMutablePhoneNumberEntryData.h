//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/NSCopying-Protocol.h>

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004bf8f
@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004bee0
- (void)appendPhoneNumber:(long long)arg1;	// IMP=0x000000000004beab
- (id)init;	// IMP=0x000000000004be97
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004be03

@end

