//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BMBookmark-Protocol.h>
#import <BiomePubSub/NSSecureCoding-Protocol.h>

@class NSArray, NSString;
@protocol BMBookmark;

@interface BMBookmarkNode : NSObject <BMBookmark, NSSecureCoding>
{
    NSArray *_upstreams;	// 8 = 0x8
    id <BMBookmark> _value;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a9c6
- (void).cxx_destruct;	// IMP=0x000000000001afd9
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <BMBookmark> value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *upstreams; // @synthesize upstreams=_upstreams;
- (id)descriptionAtLevel:(long long)arg1;	// IMP=0x000000000001ad1d
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001abee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001aa85
- (id)initWithValue:(id)arg1 upstreams:(id)arg2 name:(id)arg3;	// IMP=0x000000000001a9ce
- (id)init;	// IMP=0x000000000001a9c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
