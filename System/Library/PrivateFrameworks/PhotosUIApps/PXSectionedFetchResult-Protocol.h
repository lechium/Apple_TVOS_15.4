//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/NSObject-Protocol.h>

@class NSArray, NSIndexSet;
@protocol NSCopying><NSObject, NSObject><NSCopying;

@protocol PXSectionedFetchResult <NSObject>
@property(nonatomic, readonly) id <NSCopying><NSObject> lastObject;
@property(nonatomic, readonly) id <NSCopying><NSObject> firstObject;
@property(nonatomic, readonly) long long count;
- (_Bool)containsObject:(id <NSObject><NSCopying>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <NSObject><NSCopying>)objectAtIndex:(unsigned long long)arg1;

@optional
- (unsigned long long)indexOfObject:(id <NSObject><NSCopying>)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id <NSObject><NSCopying>)arg1;
@end
