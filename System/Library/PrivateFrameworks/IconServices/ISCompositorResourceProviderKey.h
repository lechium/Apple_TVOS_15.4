//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorResource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISCompositorResourceProviderKey : NSObject <ISCompositorResource>
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _flags;	// 16 = 0x10
}

+ (id)resourceKeyWithName:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000000b982
- (void).cxx_destruct;	// IMP=0x000000000000ba2d
@property unsigned long long flags; // @synthesize flags=_flags;
@property(retain) NSString *name; // @synthesize name=_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

