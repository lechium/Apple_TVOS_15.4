//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBMethod
{
}

+ (id)descriptor;	// IMP=0x000000000000c2dd

// Remaining properties
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) _Bool requestStreaming; // @dynamic requestStreaming;
@property(copy, nonatomic) NSString *requestTypeURL; // @dynamic requestTypeURL;
@property(nonatomic) _Bool responseStreaming; // @dynamic responseStreaming;
@property(copy, nonatomic) NSString *responseTypeURL; // @dynamic responseTypeURL;
@property(nonatomic) int syntax; // @dynamic syntax;

@end

