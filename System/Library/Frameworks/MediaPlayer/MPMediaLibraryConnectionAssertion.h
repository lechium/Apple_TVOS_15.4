//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, NSString;

@interface MPMediaLibraryConnectionAssertion : NSObject
{
    MPMediaLibrary *_library;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000db8f6
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000000db8c3
- (void)dealloc;	// IMP=0x00000000000db87e
- (id)_initWithMediaLibrary:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000db7d3

@end

